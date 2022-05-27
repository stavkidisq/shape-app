### shape-working-program

#### Program features

1. The ability to create shapes in the constructor `MainWindow`.
```c++
wgt->shapes.push_back(std::shared_ptr<AbstractShape>(new CircleShape(QPoint(300, 100), 50)));
```
2. The ability to find out shape description.
3. The ability to move any shape.
