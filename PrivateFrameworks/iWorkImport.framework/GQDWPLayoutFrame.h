/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDWPLayoutStorage, GQDSStyle;



@interface GQDWPLayoutFrame : NSObject 
{
    char *mStyleRef;
    GQDSStyle *mStyle;
    GQDWPLayoutStorage *mStorage;
}


- (void)dealloc;
- (id)layoutStyle;
- (id)storage;
- (BOOL)isBlank;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)resolveStyleRef;

@end