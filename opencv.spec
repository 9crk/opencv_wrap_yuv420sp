%define name opencv
%define version 1.0.0
%define release 1
%define sourcepkg %{name}-%{version}.tar.gz

Summary: Intel(R) Open Source Computer Vision Library.
Name: %{name}
Version: %{version}
Release: %{release}
Source0: %{sourcepkg}
URL: http://prdownloads.sourceforge.net/opencvlibrary/%{sourcepkg}
License: BSD
Packager: Serguei Boldyrev, Vadim Pisarevsky
Group: Development/Libraries
# Group: System Environment/Libraries
BuildRoot: /var/tmp/%{name}-buildroot
Prefix: /usr/local
# Requires: %{name}

%description
This is the Intel(R) Open Source Computer Vision Library, a collection
of algorithms for image processing and computer vision.
The package contains libraries, headers, documentation and sample applications.

%prep
rm -rf ${RPM_BUILD_ROOT}

%setup -q

%build
CFLAGS="$RPM_OPT_FLAGS" ./configure --prefix=%{prefix}
make

%install
rm -rf $RPM_BUILD_ROOT
make install prefix=$RPM_BUILD_ROOT/%{prefix}

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%doc AUTHORS README COPYING INSTALL NEWS TODO
%{prefix}/*

%changelog
* Wed Aug 07 2004 Vadim Pisarevsky <vadim.pisarevsky@intel.com>
- Removed obsolete demo applications, updated for OpenCV beta 4 (0.9.6)
* Wed Oct 30 2002 Vadim Pisarevsky <vadim.pisarevsky@intel.com>
- Modified for OpenCV beta 3 (0.9.4)
* Mon Apr  8 2002 Serguei Boldyrev <sergueiX.a.boldyrev@intel.com>
- First spec file for RedHat 7.2 distribution.

# end of file
