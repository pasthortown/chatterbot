docker run -it -d --name chatterbot_mongo mongo
docker run -it -d --name chatterbot_mongo_express -e ME_CONFIG_MONGODB_SERVER=mongo -p 8081:8081 --link chatterbot_mongo:mongo mongo-express
docker run -it -d --name chatterbot -v /root/Dockers/chatterbot/chatbot:/chatbot -v /root/Dockers/siturin-publish-produccion/ssl_certificates:/ssl_certificates -v /root/Dockers/siturin-publish-produccion/ssl_keys:/ssl_keys -p 5000:5000 --link chatterbot_mongo:mongo pasthortown/chatterbot:latest
