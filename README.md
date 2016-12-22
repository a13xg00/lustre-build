# jenkins-docker

docker-compose build
docker-compose up -d

docker-compose ps

         Name                       Command               State                       Ports
--------------------------------------------------------------------------------------------------------------
docker_jenkinsdata_1     /bin/bash                        Exit 0
docker_jenkinsnginx_1    nginx                            Up       0.0.0.0:80->80/tcp
docker_jenkinsserver_1   /bin/tini -- /usr/local/bi ...   Up       0.0.0.0:5000->5000/tcp, 50000/tcp, 8080/tcp
