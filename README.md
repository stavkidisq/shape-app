### shape-working-program

#### Program features

1. The ability to create shapes in the constructor `MainWindow`.
```c++
wgt->shapes.push_back(std::shared_ptr<AbstractShape>(new CircleShape(QPoint(300, 100), 50)));
```
2. The ability to find out shape description.
![image](https://user-images.githubusercontent.com/57217014/170651850-09bf0d07-2433-4867-8ef8-01aae2fd9ac6.png)
3. The ability to move any shape.
4. The ability to delete any shape.
![image](https://user-images.githubusercontent.com/57217014/170652038-7158ef3c-ab94-4861-b5d9-f944162602fc.png)
