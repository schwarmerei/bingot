#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include <QObject>
#include <QVector>
#include "Block.h"

class BlockChain : public QObject
{
    Q_OBJECT

private:
    QVector<QVector<Block> > m_chain;

public:
    explicit BlockChain(QObject *parent = 0);


    int size();
    QByteArray getLastBlockHash();

    bool add(const Block &b);

    void prune();

private:
    const QVector<Block> &at(int index);

signals:

public slots:

};

#endif // BLOCKCHAIN_H
