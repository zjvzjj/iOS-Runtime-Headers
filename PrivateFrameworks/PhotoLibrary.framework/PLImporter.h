/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSThread, NSRecursiveLock, NSSet, NSMutableArray;

@interface PLImporter : NSObject  {
    NSRecursiveLock *_accessLock;
    NSMutableArray *_importQueue;
    NSThread *_workerThread;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    BOOL _cancelCurrentImport;
}

+ (id)sharedImporter;
+ (BOOL)importInProgress;

- (id)init;
- (void)dealloc;
- (BOOL)isAudioFileExtension:(id)arg1;
- (void)addDirectoryToOrphanChecklist:(id)arg1;
- (int)identifierForNewImportSession;
- (void)queueImportFileAtPath:(id)arg1 intoEvent:(id)arg2 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg3 importSessionIdentifier:(int)arg4;
- (void)queueImportFilesAtDirectoryPath:(id)arg1 baseName:(id)arg2 extensions:(id)arg3 intoEvent:(id)arg4 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg5 importSessionIdentifier:(int)arg6;
- (void)notifySuccessOnMainThread:(id)arg1;
- (void)notifyFailureOnMainThread:(id)arg1;
- (void)notifyOnMainThread:(id)arg1;
- (void)workerThread:(id)arg1;
- (int)queuedImportCount;
- (void)_removeOrphanedMediaFilesFromDirectory:(id)arg1;
- (void)_removeOrphanedMediaFilesFromDirectories:(id)arg1;
- (void)removeDirectoryFromOrphanChecklist:(id)arg1;
- (void)_loadFileExtensionInformation;
- (BOOL)isRawImageFileExtension:(id)arg1;
- (BOOL)isNonRawImageFileExtension:(id)arg1;
- (BOOL)isVideoFileExtension:(id)arg1;
- (int)priorityForFileExtension:(id)arg1;
- (BOOL)isImageFileExtension:(id)arg1;
- (BOOL)_testAndClearCancelImportFlag;
- (void)checkDirectoriesInOrphanChecklist;
- (id)masterExtensionFromExtensions:(id)arg1;
- (id)cancelAllImports;

@end