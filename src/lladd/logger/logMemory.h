#include <lladd/transactional.h>
#include <lladd/ringbuffer.h>
#include <lladd/consumer.h>
#include <lladd/iterator.h>
#include <lladd/fifo.h>

#ifndef __LOGMEMORY_H
#define __LOGMEMORY_H

/**
   @file

   A poorly named in-memory fifo based on ringbuffer.h

   @todo Move this all to some reasonably named interface. :)

   $Id$
*/

lladdFifo_t * logMemoryFifo(size_t size, lsn_t initialOffset);

void logMemory_Tconsumer_close(int xid, lladdConsumer_t *it);
compensated_function int Tconsumer_push(int xid, lladdConsumer_t *it, byte *key, size_t keySize, byte *val, size_t Valsize);

void logMemory_Iterator_close(int xid, void * impl);
compensated_function int logMemory_Iterator_next(int xid, void * impl);
compensated_function int logMemory_Iterator_tryNext(int xid, void * impl);
compensated_function int logMemory_Iterator_key (int xid, void * impl, byte ** key);
compensated_function int logMemory_Iterator_value (int xid, void * impl, byte ** value);
compensated_function void logMemory_Iterator_releaseTuple(int xid, void *it);
compensated_function void logMemory_Iterator_releaseLock (int xid, void * impl);
#endif