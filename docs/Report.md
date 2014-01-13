# Space Invaders Report

Ruben Van Assche - s0122623

## Functionality
- Aliens, Guns, Walls
- Basic Space Invaders gameplay
- Levels

## Compiling
	mkdir build
	cd build
	cmake .
	make
	make install

## Generating The Documentation
Change the following line in the CMakeLists.txt file at the root directory from:
	# Documentation
	SET(BUILD_DOCS FALSE)
To:
	# Documentation
	SET(BUILD_DOCS TRUE)

## Design
### Some Names
- Controllers : work between views and entities
- Models : set's of entities
- Entities : specific objects, stroing information and having a interface for quering information
- Views : objects connected to entities representing them to teh user
- Factories : systems to create Entities and views
- SI(Space Invaders Element) :  special container containing all the models, views and controllers which is being used through the whole system
- Libraries : classes for building all above

### Libraries
**Assets**
A library which can hold textures and fonts so those can be loaded when needed and don't waste memory with endless copies of them.
**Controller**
The base class for a Controller.
**Entity**
The base class for an Entity.
**Factory**
The base class for a Factory.
**ScreenEntity**
The base class for a ScreenEntity, an Entity which will be presented on screen and has special functions for that(location, move, collision detection, ...)
**SI**
The Space Invaders Element
**Size**
A class for representing a size with an width, height and point. Beter said : a box in 2D space.
**Utilities**
File with the util namespace with some usefull utilities for the whole system.
**View**
The base class for a View.
### Controllers
Each of the following controllers inherits the base controller and define some actions in the system.
***Collision Controller***
Has only one function check() which is called each time after an update of all the elements(Aliens, Walls, Guns, ...) in the game. It will check if certain elements collide with each other and if so it will call the apropriate controller for handeling the collision.
***Event Controller***
The event controller is called each time an event(keybord touch) happens, it will determine what to do after the event. This means selection the right controller and function.
***Game Controller***
Can be seen as the "main" controller, when the game is started the first controller to be called is the game controller. It has functions to build up the game(initiate all the elements), show the startscreen and the game over or game won screen. And of course it shows the screen where the game is played and gives all the events to the approptiate controllers.
***Motion Contoller***
The motion controller is the controller who moves the elements over the screen. Sometimes these elements are moved automatic, for example the aliens they will be moved each time a certain time passes by in the Game Controller. Sometimes elements are moved by the user, for example the gun is getting moved when the event controller gets an left or right keybord touch. The Game controller will recieve the event and give it to the Event controller who decides to call the Motion controller to move the gun. Besides moving elements has the motion controller also the functions to shoot bullets. These are also automatic as manual by the user called.
***Screen Controller***
The screen controller handles the screen(window) provided. During one cycle of the game each view will be able to draw to the window. But these views won't be showed until the screen controller's redraw method is called from somewhere. It also handles the function to close the window.
### Entities
