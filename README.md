# Develop omgeving

## Docker
In deze repo heb ik een docker file gemaakt die c++ build

### Hoe gebruiken
Om de cpp file te compile gebruik je het volgende command in de root `docker build -t hello_world .`
Om vervolgens het programma te runnen gebruik je het volgende commando `docker run hello_world`

### Hoe werkt de dockerfile
Eerst word een container gemaakt met ubuntu:24.04, daarna een omgevings variabel instellen en zorgen dat alles up to date is en packages installeren. 

Daarna word de workdir gemaakt en wordt het C++ project gebouwt. 

ALs laatste word het project uitgevoerd.