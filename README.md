# exam_27.06.23 

## DOCKER commands
```sh
docker login
docker build -t alinagazaryan/test .
docker push alinagazaryan/test
docker run  --name testtt -p 33333:33333 -t -i alinagazaryan/test
```
DockerHub with image 
## Git comands
Для того чтобы сделать ветку
```sh
git clone https://github.com/alinagazaryan/exam_27.06.23
git add *
git commit -am "text" 
git checkout -b название ветки
git push https://github.com/alinagazaryan/exam_27.06.23 название ветки
git checkout main
git merge название ветки
```
