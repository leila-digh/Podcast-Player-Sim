# Podcast-Player-Sim

This project simulates a simple podcast playing application that will allow a user to search for a podcast and episodes, add to their playlist and play the podcast either with video and audio or audio only.

## Features
1. Search & Filter
Users are able to search for episodes by host, category/genre or both.

2. Playlisting
Users are able to 'get' episodes to add in a playlist or queue and they can play episodes from that.

3. Playback Controls; Video On or Off
Users are able to decide if they want a visual experience or not with their podcast

### How It Works

Podcast Factory creates Podcasts and Episode objects

Podify stores Podcasts alongside their episodes and allows them to be queried

The Search classes faciliitate the querying

Podcast Player is responsible for the episode playback

### This project demonstrates my understanding of;
1. Object-Oriented Programming (OOP)
2. Software Architecture and Design/ MVC Design Pattern
3. Data Structures
    * Custom Data Structures (like Podify)
4. File I/O Handling in C++
5. Memory Management & Garbage Collection
6. Testing, Debugging, Error Handling

#### How to Compile and Run
1. Clone the Repository
2.  ``` make all ```
3.  ```  ./podify ``` 


<details>
<summary>Files Included</summary>

1. Makefile

2. Array.h 

	A simple (templated) data structure.

3. defs.h

	Has variable definitions for variables that are used in the whole program (MAX_ARRAY)

4. Controller.cc Controller.h

	Controls the interaction of PodcastFactory and Podify with the View.
	
5. Episode.cc Episode.h

	Contains Episode meta-data and content.

6. main.cc

	It instantiates a Controller object and calls launch.

7. Podcast.cc Podcast.h 

	Contains Podcast meta-data as well as a collection of Episodes.

8. PodcastFactory.cc PodcastFactory.h 

	Creates a Podcast, Episode and Search 

9. PodcastPlayer.cc PodcastPlayer.h

	Determines how to play an Episode. Audio only or Video and Audio.

10. Podify.cc Podify.h

	Stores Podcasts along with their Episodes, allows them to be queried

11. Search.cc Search.h

	Virtual base class of all Search objects.

	H_Search: Matches Episodes by the Podcast host.

	C_Search: Matches Episodes by the Podcast category.

	HorC_Search : Matches Episodes by the Podcast host or category.

12. View.cc View.h 

	Collects user input and displays Podcasts, Episodes and other information.

13. media/

	Folder with podcast names + episode names and a file with the category and audio

14. bin/

	Folder with original Array.h (not template) file

15. videos/

	Folder with ascii art representing video form of podcasts

</details>

#### Example
``` 
> make all 
> ./podify  

Launching...
Attempting to load episode Rome
Attempting to load episode Egypt
Attempting to load episode Cornwall
Attempting to load episode Aztec
Attempting to load episode Mongolia
Attempting to load episode F***in Up Young
Attempting to load episode Little Metal Baby Fist
Attempting to load episode Nicotine
Attempting to load episode Verona Lung
Attempting to load episode Beat
Attempting to load episode Foil
Attempting to load episode Word Crimes
Attempting to load episode Tacky
Attempting to load episode First World Problems
Attempting to load episode Handy
Attempting to load episode Lasagna
Attempting to load episode Steak
Attempting to load episode Greek Salad
Attempting to load episode Spicy Stew
Attempting to load episode Fish
Attempting to load episode In Bloom
Attempting to load episode Drain You
Attempting to load episode Lounge Act
Attempting to load episode On a Plain
Attempting to load episode Lithium
Done initializing

Please make a selection:

  (1) Show all Podcasts
  (2) Show single Podcast
  (3) Get episode by host
  (4) Get episode by category
  (5) Get episode by host or category
  (6) Print current episode list
  (7) Play current episode list
  (8) Toggle video
  (0) Exit

Enter your selection: 1
Showing all podcasts: 
1: Podcast:            Ancient Civilizations         
Hosted by:          Bif                           

2: Podcast:            The Elsa Experience           
Hosted by:          Elsa                          

3: Podcast:            Mandatory Fun                 
Hosted by:          Weird Al                      

4: Podcast:            We're Cooking!                
Hosted by:          Pat                           

5: Podcast:            Nevermind                     
Hosted by:          Dave Grohl  

Please make a selection:

  (1) Show all Podcasts
  (2) Show single Podcast
  (3) Get episode by host
  (4) Get episode by category
  (5) Get episode by host or category
  (6) Print current episode list
  (7) Play current episode list
  (8) Toggle video
  (0) Exit

Enter your selection: 3
Enter host: Elsa

Please make a selection:

  (1) Show all Podcasts
  (2) Show single Podcast
  (3) Get episode by host
  (4) Get episode by category
  (5) Get episode by host or category
  (6) Print current episode list
  (7) Play current episode list
  (8) Toggle video
  (0) Exit

Enter your selection: 6
Playlist size: 5
Podcast Title:      The Elsa Experience           
Host:               Elsa                          
Category:           R&B                           
Episode Title:      F***in Up Young               

Podcast Title:      The Elsa Experience           
Host:               Elsa                          
Category:           R&B                           
Episode Title:      Little Metal Baby Fist        

Podcast Title:      The Elsa Experience           
Host:               Elsa                          
Category:           R&B                           
Episode Title:      Nicotine                      

Podcast Title:      The Elsa Experience           
Host:               Elsa                          
Category:           R&B                           
Episode Title:      Verona Lung                   

Podcast Title:      The Elsa Experience           
Host:               Elsa                          
Category:           R&B                           
Episode Title:      Beat  


```



