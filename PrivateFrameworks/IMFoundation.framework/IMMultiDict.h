/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSMutableDictionary;

@interface IMMultiDict : NSObject {
    unsigned long long _count;
    NSMutableDictionary *_dictionary;
}

@property(readonly) NSArray * allKeys;
@property(readonly) unsigned long long count;
@property(retain) NSMutableDictionary * dictionary;

- (id)allKeys;
- (unsigned long long)count;
- (unsigned long long)countForKey:(id)arg1;
- (void)dealloc;
- (id)dequeueObjectForKey:(id)arg1;
- (id)description;
- (id)dictionary;
- (void)enqueueObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (id)headObjectForKey:(id)arg1;
- (id)init;
- (id)objectsForKey:(id)arg1;
- (id)peekObjectForKey:(id)arg1;
- (id)popObjectForKey:(id)arg1;
- (void)pushObject:(id)arg1 forKey:(id)arg2;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectsForKey:(id)arg1;
- (void)setDictionary:(id)arg1;

@end