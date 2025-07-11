objects = main.o View.o Controller.o Podify.o Podcast.o Episode.o PodcastPlayer.o PodcastFactory.o Search.o


all: podify

podify: $(objects)
	g++ -o podify $(objects)

main.o: main.cc Array.h
	g++ -c main.cc 


View.o: View.h View.cc Array.h
	g++ -c View.cc

Controller.o: Controller.h Controller.cc Array.h
	g++ -c Controller.cc


Podify.o: Podify.h Podify.cc Array.h
	g++ -c Podify.cc


Podcast.o: Podcast.cc Podcast.h Array.h
	g++ -c Podcast.cc

Episode.o: Episode.cc Episode.h
	g++ -c Episode.cc
	
PodcastPlayer.o: PodcastPlayer.cc PodcastPlayer.h
	g++ -c PodcastPlayer.cc
	
PodcastFactory.o: PodcastFactory.cc PodcastFactory.h
	g++ -c PodcastFactory.cc

Search.o: Search.cc Search.h
	g++ -c Search.cc

clean:
	rm -f podify *.o	