/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputViewPlacementTransition : NSObject {
    <NSObject> * animationContext;
    <UIInputViewAnimationController> * animationController;
    int  animationState;
    UIInputViewAnimationStyle * animationStyle;
    BOOL  cancelled;
    UIInputViewSetPlacement * fromPlacement;
    UIInputViewSetNotificationInfo * notificationInfo;
    unsigned int  notifications;
    UIInputViewSetPlacement * toPlacement;
}

@property (nonatomic, retain) <NSObject> *animationContext;
@property (nonatomic, retain) <UIInputViewAnimationController> *animationController;
@property (nonatomic) int animationState;
@property (nonatomic, retain) UIInputViewAnimationStyle *animationStyle;
@property (nonatomic) BOOL cancelled;
@property (nonatomic, retain) UIInputViewSetPlacement *fromPlacement;
@property (nonatomic, retain) UIInputViewSetNotificationInfo *notificationInfo;
@property (nonatomic) unsigned int notifications;
@property (nonatomic, retain) UIInputViewSetPlacement *toPlacement;

+ (id)transitionFromPlacement:(id)arg1 toPlacement:(id)arg2 withAnimationStyle:(id)arg3;

- (id)animationContext;
- (id)animationController;
- (int)animationState;
- (id)animationStyle;
- (BOOL)cancelled;
- (void)dealloc;
- (BOOL)didAdvanceAnimationToState:(int)arg1;
- (id)fromPlacement;
- (id)notificationInfo;
- (unsigned int)notifications;
- (void)setAnimationContext:(id)arg1;
- (void)setAnimationController:(id)arg1;
- (void)setAnimationState:(int)arg1;
- (void)setAnimationStyle:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setFromPlacement:(id)arg1;
- (void)setNotificationInfo:(id)arg1;
- (void)setNotifications:(unsigned int)arg1;
- (void)setToPlacement:(id)arg1;
- (id)toPlacement;

@end
