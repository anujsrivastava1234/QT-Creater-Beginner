#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>

class Animal : public QObject
{
  Q_OBJECT
public:
  explicit Animal(QObject *parent = nullptr);
  ~Animal();

  static QString name;
  static int count;

signals:

};

#endif // ANIMAL_H
