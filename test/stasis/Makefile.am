# INCLUDES = @CHECK_CFLAGS@

## Had to disable check_lht because lht needs to be rewritten.
TESTS = check_lhtable check_logEntry check_logWriter check_page check_operations check_transactional2 check_recovery check_blobRecovery check_bufferManager check_pageOperations check_linearHash check_header check_linkedListNTA check_linearHashNTA check_pageOrientedList check_lockManager check_compensations check_errorHandling check_ringbuffer check_iterator check_multiplexer check_bTree check_regions check_allocationPolicy check_dirtyPageTable check_io check_rangeTracker check_replacementPolicy check_lsmTree check_groupBy

noinst_PROGRAMS = $(TESTS)
LDADD = $(top_builddir)/src/stasis/libstasis.la
CLEANFILES = check_lht.log check_logEntry.log storefile.txt logfile.txt blob0_file.txt blob1_file.txt check_blobRecovery.log check_logWriter.log check_operations.log check_recovery.log check_transactional2.log check_page.log check_bufferManager.log check_bufferMananger.log check_lladdhash.log check_pageOperations.log check_linearhash.log check_linkedListNTA.log check_linearHashNTA.log check_pageOrientedListNTA.log check_lockManager.log check_compensations.log check_errorhandling.log check_header.log check_iterator.log check_linearHash.log check_ringbuffer.log check_bTree.log check_groupBy.log
AM_CFLAGS=${GLOBAL_CFLAGS}
