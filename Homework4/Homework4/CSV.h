#ifndef CSV_H
#define CSV_H


#include <QString>
#include <QStringList>
#include <QVector>

class CSV {
public:
    static QVector<QStringList> readCSV(const QString& fileName);
    static bool writeCSV(const QString& fileName, const QVector<QStringList>& data);
};



#endif // CSV_H
