/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableArray, WebDataSource, WAKView, NSMutableSet;



@interface WebPluginController : NSObject <WebPluginManualLoader>
{
    WAKView *_documentView;
    WebDataSource *_dataSource;
    NSMutableArray *_views;
    BOOL _started;
    NSMutableSet *_checksInProgress;
}

+ (id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2;
+ (void)addPlugInView:(id)arg1;
+ (BOOL)isPlugInView:(id)arg1;

- (id)initWithDocumentView:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)dealloc;
- (BOOL)plugInsAreRunning;
- (void)startAllPlugins;
- (void)stopAllPlugins;
- (void)addPlugin:(id)arg1;
- (void)destroyPlugin:(id)arg1;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1;
- (void)_cancelOutstandingChecks;
- (void)destroyAllPlugins;
- (BOOL)processingUserGesture;
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4;
- (void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2;
- (void)webPlugInContainerWillShowFullScreenForView:(id)arg1;
- (void)webPlugInContainerDidHideFullScreenForView:(id)arg1;
- (void)showURL:(id)arg1 inFrame:(id)arg2;
- (void)webPlugInContainerShowStatus:(id)arg1;
- (void)showStatus:(id)arg1;
- (id)webFrame;
- (id)bridge;
- (id)webView;
- (id)URLPolicyCheckReferrer;
- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;
- (void)pluginView:(id)arg1 receivedData:(id)arg2;
- (void)pluginView:(id)arg1 receivedError:(id)arg2;
- (void)pluginViewFinishedLoading:(id)arg1;

@end