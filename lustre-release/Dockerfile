FROM jenkins-slave
MAINTAINER AlexG

# Install some build tools and libs

RUN yum -y install \
		libtool \
		rpm-build \
		libselinux-devel

# Install kernel-devel and kernel-headers

RUN yum -y install \
		kernel-devel-3.10.0-514.2.2.el7.x86_64 \
		kernel-headers-3.10.0-514.2.2.el7.x86_64

# Install OFED dependences

RUN yum -y install \
		perl \ 
		pciutils \
		gtk2 \
		atk \
		cairo \
		gcc-gfortran \
		libxml2-python \
		tcsh \
		libnl \
		lsof \
		tcl \
		tk \
		libselinux-python \  
		numactl-libs \
		ethtool 

# Install OFED ofa-kernel-devel

COPY mlnx-ofa_kernel-devel-3.4-OFED.3.4.2.0.0.1.g30039f7.rhel7u3.x86_64.rpm ./
RUN rpm -ivh --nodeps mlnx-ofa_kernel-devel-3.4-OFED.3.4.2.0.0.1.g30039f7.rhel7u3.x86_64.rpm

# Install ZFS

RUN yum -y install epel-release
RUN rpm -ivh http://download.zfsonlinux.org/epel/zfs-release.el7.noarch.rpm
RUN yum -y install zfs libzfs2-devel

# ZFS devel headers fix

COPY zfs/0.6.5.8/3.10.0-514.2.2.el7.x86_64 /var/lib/dkms/zfs/0.6.5.8/3.10.0-514.2.2.el7.x86_64/
COPY spl/0.6.5.8/3.10.0-514.2.2.el7.x86_64 /var/lib/dkms/spl/0.6.5.8/3.10.0-514.2.2.el7.x86_64/

# Install kernell kernel-debuginfo-common for build ldiskfs 

RUN wget -q http://debuginfo.centos.org/7/x86_64/kernel-debuginfo-common-x86_64-3.10.0-514.2.2.el7.x86_64.rpm
RUN rpm -ivh kernel-debuginfo-common-x86_64-3.10.0-514.2.2.el7.x86_64.rpm 

# Erase RPMs
RUN rm -f *.rpm 

