### shape-working-program
[![Last commit](https://img.shields.io/github/last-commit/Stavkidisq/ShapeWorkingProgram)]()
[![Commit activity](https://img.shields.io/github/commit-activity/y/Stavkidisq/ShapeWorkingProgram)]()
[![Github All Releases](https://img.shields.io/github/downloads/Stavkidisq/ShapeWorkingProgram/total.svg)]()
[![Build Status](https://travis-ci.com/username/projectname.svg?branch=master)](https://travis-ci.com/Stavkidisq/ShapeWorkingProgram)
[![Code Size](https://img.shields.io/github/languages/code-size/Stavkidisq/ShapeWorkingProgram)]()
[![Repo Size](https://img.shields.io/github/repo-size/Stavkidisq/ShapeWorkingProgram)]()
[![GitHub watchers](https://img.shields.io/github/watchers/Stavkidisq/ShapeWorkingProgram?style=social)]()
[![Twitter follow](https://img.shields.io/twitter/follow/stavkidisq?style=social)]()

#### Program features

1. The ability to create shapes in the constructor `MainWindow`.
```c++
wgt->shapes.push_back(std::shared_ptr<AbstractShape>(new CircleShape(QPoint(300, 100), 50)));
```
2. The ability to find out shape description.
3. The ability to move any shape.
