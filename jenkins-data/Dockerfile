FROM debian:jessie
MAINTAINER Alex G
RUN mkdir -p /var/jenkins_home
RUN useradd -d /var/jenkins_home -u 1000 -m -s /bin/bash jenkins
RUN mkdir -p /var/log/jenkins
RUN chown -R jenkins:jenkins /var/log/jenkins
RUN chown -R jenkins:jenkins /var/jenkins_home
VOLUME ["/var/log/jenkins","/var/jenkins_home"]
USER jenkins
