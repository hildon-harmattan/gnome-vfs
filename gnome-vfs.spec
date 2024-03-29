%define		localstatedir /var/lib

Name:		gnome-vfs
Summary:	The GNOME virtual file-system libraries
Version:	2.24.4
Release:	1_cvs
License:	LGPL
Group:		System Environment/Libraries
Source:		ftp://ftp.gnome.org/pub/GNOME/stable/sources/%name/%name-%{version}.tar.gz
URL:		http://www.gnome.org/
BuildRoot:	/var/tmp/%{name}-root
Requires:	control-center
Requires:       glib2 >= 2.9.3
Requires:	GConf2 >= 1.1.1
BuildRequires:	gnome-libs-devel, control-center-devel
BuildRequires:	bonobo-activation-devel >= @BONOBO_ACTIVATION_REQUIRED@
BuildRequires:	bonobo-devel >= @BONOBO_REQUIRED@
BuildRequires:	GConf2-devel >= 1.1.1
BuildRequires:	gtk2-devel >= @GTK_REQUIRED@
BuildRequires:	ORBit-devel >= @ORBIT_REQUIRED@
BuildRequires:	libxml2 >= 2.6.0

%description
GNOME VFS is the GNOME virtual file system. It is the foundation of the
Nautilus file manager. It provides a modular architecture and ships with
several modules that implement support for file systems, http, ftp and others.
It provides a URI-based API, a backend supporting asynchronous file operations,
a MIME type manipulation library and other features.

%package devel
Summary:	Libraries and include files for developing GNOME VFS applications.
Group:		Development/Libraries
Requires:	%name = %{version}
Requires:	glib-devel
Requires:	bonobo-devel

%description devel
This package provides the necessary development libraries for writing
GNOME VFS modules and applications that use the GNOME VFS APIs.

%prep
%setup -q

%build

%ifarch alpha
    MYARCH_FLAGS="--host=alpha-redhat-linux"
%endif

# Needed for snapshot releases.
MYCFLAGS="$RPM_OPT_FLAGS"

if [ ! -f configure ]; then
    CFLAGS="$MYCFLAGS" ./autogen.sh $MYARCH_FLAGS \
	--enable-more-warnings --prefix=%{_prefix} \
	--localstatedir=%{localstatedir} --sysconfdir=%{_sysconfdir} \
	--mandir=%{_mandir} --libdir=%{_libdir} \
	--includedir=%{_includedir} --bindir=%{_bindir}
fi

CFLAGS="$MYCFLAGS" ./configure $MYARCH_FLAGS --enable-more-warnings \
    --prefix=%{_prefix} --localstatedir=%{localstatedir} \
    --sysconfdir=%{_sysconfdir} --mandir=%{_mandir} \
    --libdir=%{_libdir} --includedir=%{_includedir} \
    --bindir=%{_bindir} 

make

%install
rm -rf $RPM_BUILD_ROOT

make -k sysconfdir=$RPM_BUILD_ROOT%{_sysconfdir} \
    prefix=$RPM_BUILD_ROOT%{_prefix} mandir=$RPM_BUILD_ROOT%{_mandir} \
    libdir=$RPM_BUILD_ROOT%{_libdir} bindir=$RPM_BUILD_ROOT\%{_bindir} \
    includedir=$RPM_BUILD_ROOT%{_includedir} install

%find_lang %name

%clean
rm -rf $RPM_BUILD_ROOT

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files -f %{name}.lang
%defattr(-, root, root)

%doc AUTHORS COPYING ChangeLog NEWS README
%config %{_sysconfdir}/gnome-vfs-2.0/modules/*.conf
%config %{_sysconfdir}/gnome-vfs-2.0/vfolders/*.vfolder-info
%{_libdir}/*.so.*
%{_libdir}/*.so
%{_libdir}/vfs/extfs/*
%{_libdir}/gnome-vfs-2.0/modules/*.so
%{_libdir}/bonobo/monikers/*.so
%{_libdir}/bonobo/servers/*.server
%{_prefix}/share/gtk-doc/html/gnome-vfs/*.html
%{_prefix}/share/locale/*/LC_MESSAGES/*.mo

%files devel
%defattr(-, root, root)
%{_includedir}/gnome-vfs-2.0/libgnomevfs/*.h
%{_includedir}/gnome-vfs-module-2.0/libgnomevfs/*.h
%{_libdir}/gnome-vfs-2.0/include/*.h
%{_libdir}/*.a
%{_libdir}/*.la
%{_libdir}/gnome-vfs-2.0/modules/*.a
%{_libdir}/gnome-vfs-2.0/modules/*.la
%{_libdir}/bonobo/monikers/*.a
%{_libdir}/bonobo/monikers/*.la
%{_libdir}/pkgconfig/*.pc

%changelog

* Sun Dec 15 2001 Ross Golder <ross@golder.org>
- fixed broken Name:

* Sun Oct 21 2001 Gregory Leblanc <gleblanc@linuxweasel.com>
- some messing around with Requires: and BuildRequires
- cleaned up %files quite a bit (still not quite as good as it could be)
- removed a bunch of unnecessary %defines
