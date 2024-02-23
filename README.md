# Lab 6 Inheritance and Polymorphism

### Objectives

Design and implement an inventory system to manage different types of wearable tech products using inheritance and polymorphism.

See the course web page [lab5](https://cmsc240-s24.github.io/lab/6) for the full directions.

### Write the names of your group members here

1. Toni Wu
2. Dhruvam Desai

### Test Devices Polymorphism
testDevices stores different Wearable devices in a vector of Wearable device type. This vector implements polymorphism as it allows for and stores child types of different types including FittnessTracker, SmartWatch, and ARGlasses. It also uses a for loop to traverse the objects in the vector calling their getInfo method. Here, the getInfo method is virtual in the Wearable device class and subsequently overridden in each child class. Each child class also takes advantage of protected members in Wearable device class to pull base information of each device by accessing those variables. Overall, polymorphism allows the loop to run correctly utilizing different objects and different versions of getInfo method to print all information of each object.

![UML of Lab6](https://github.com/toni95518/CPP-Inheritance-and-Polymorphism-Practice/assets/123842890/35b05a25-fd2e-4035-b7ae-e6b34c8d9626)
