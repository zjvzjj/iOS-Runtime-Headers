/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UILabel;

@interface CKTextContentView : UITextContentView  {
    UILabel *_defaultTextView;
}

+ (id)defaultFont;
+ (float)singleLineTextHeight;

- (void)reflow;
- (id)supportedPasteboardTypesForCurrentSelection;
- (BOOL)keyboardInputChanged:(id)arg1;
- (id)automaticallySelectedOverlay;
- (void)scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)fontSizeChanged;
- (void)_updateFontSize;
- (void)_updateCSSMargins;
- (BOOL)hasImages;
- (void)_adjustForSingleLineHeightIfNecessary;
- (void)_updateDefaultText;
- (void)_wvReflow;
- (BOOL)_wvHasImages;
- (void)_wvSetupCSSWithMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)hideDefaultText:(BOOL)arg1;
- (void)setDefaultText:(id)arg1;

@end