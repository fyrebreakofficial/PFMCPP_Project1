#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.
        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       car
//  action 1:   the car rolls forward
car.rollForward();
//  action 2:   the car consumes gas
car.consumeGas();
//  action 3:   the car wipes its own windows with wipers
car.wipeWindow();


//  2)
//  Noun:       snake
//  action 1:   the snake rolls over
snake.rollOver();
//  action 2:   the snake eats a mouse
snake.eatMouse();
//  action 3:   the snake wraps around an object
snake.wrapObject();


//  3)
//  Noun:       pikachu
//  action 1:   pikachu says something
pikachu.sayWord();
//  action 2:   pikachu goes to the restroom
pikachu.goToRestroom();
//  action 3:   pikachu drinks water
pikachu.drinkWater();


//  4)
//  Noun:       bunny
//  action 1:   bunny does a 360
bunny.do360();
//  action 2:   bunny attacks
bunny.attack();
//  action 3:   bunny ground attacks from above using missiles fired from a helicopter
bunny.helicopterAttackMissile();

//  5)
//  Noun:       computer mouse
//  action 1:   mouse sends click signal to computer
computerMouse.sendClick();
//  action 2:   sends scroll signal
computerMouse.sendScroll();
//  action 3:   mouse depletes battery
computerMouse.depleteBattery();


//  6)
//  Noun:       dog
//  action 1:   the dog barks
dog.bark();
//  action 2:   the dog eats 
dog.eat();
//  action 3:   the dog flies
dog.fly();


//  7)
//  Noun:       cat
//  action 1:   the cat drives a car
cat.driveCar();
//  action 2:   the cat drinks milk
cat.milk();
//  action 3:   the cat googles something
cat.google();


//  8)
//  Noun:       whiteMouse
//  action 1:   the mouse jumps forward
whiteMouse.jumpForward();
//  action 2:   the mouse says hi to owner
whiteMouse.sayHiToOwner();
//  action 3:   the mouse thinks about cheese
whiteMouse.thinkAboutCheese();


//  9)
//  Noun:       water
//  action 1:   water fills a container
water.fillContainer();
//  action 2:   water evaporates
water.evaporate();
//  action 3:   water rains from the sky
water.rainFromSky();


//  10)
//  Noun:       fire
//  action 1:   fire spreads
fire.spread();
//  action 2:   fire flies across the air manipulated by magic
fire.magicFly();
//  action 3:   fire launches out of a gun
fire.gunLaunch();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
