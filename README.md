# CyclicalAnimation

As I browsed the web for inspiration on open-framework animations, I stumbled upon this video https://www.youtube.com/watch?v=ZbtKA6rYv-0 . I liked the idea of simulating concepts of science through art and code. I decided to recreate this animation by using the basic functions I've learned about in this course this far. 
This animation mimics the magnetic field through a conductor with current flowing through it. The red line is the current whereas the spheres rotating around the wire are the magnetic field. The sliders allow the user to view the changes that occur to increase a magnetic field, the slider increases the space range between the spheres whilst also increasing the width of the line as a higher current induces a greater magnetic field. The algorithm is as follows: the line is a static line through 3d space. The animation is that of the spheres rotating around the wire, it is dependent on the degree of rotation where the argument is the time elapsed modulo a well-chosen constant to achieve a smooth animation. The spheres fade and reappear by controlling the opacity in the ofcolor function by a value of framenumber modulo 300. The functions push and pop matrix ensures that the transformations are saved and restored. The push and pop style ensures that the shape properties are saved and restored. The colors black, blue, and red demonstrate the optimum contrast for a visible animation.


Video of the animation
https://drive.google.com/file/d/1obZbuWQwfGJmrWkMyMp-G2pDy452lioI/view?usp=sharing

minimum magnetic field animation
![Screen Shot 2022-04-15 at 10 04 45 AM](https://user-images.githubusercontent.com/102983688/163529674-237894c8-0fba-41ee-b928-cc5aebfa8f35.png)

maximum magnetic field animation
![Screen Shot 2022-04-15 at 10 16 06 AM](https://user-images.githubusercontent.com/102983688/163529659-fd78756a-f402-44b7-ad6f-4a15e1a18610.png)

