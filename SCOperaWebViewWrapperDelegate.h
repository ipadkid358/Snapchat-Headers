/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCOperaWebViewWrapperDelegate <NSObject>
@required
-(BOOL)isShareable;
-(void)setAutoFillPromptVisibility:(BOOL)arg1 webviewWrapper:(id)arg2;
-(void)triggerContextMenuForWebviewWrapper:(id)arg1;
-(void)didResetWebviewForWebviewWrapper:(id)arg1;
-(void)showSafeBrowsingWarning:(id)arg1 urlType:(long long)arg2 webviewWrapper:(id)arg3;
-(void)didStartLoadForWebviewWrapper:(id)arg1;
-(void)updateProgress:(float)arg1 webviewWrapper:(id)arg2;
-(void)updateUrl:(id)arg1 overrideWhitelisted:(BOOL)arg2 webviewWrapper:(id)arg3;
-(void)didFinishLoadForWebviewWrapper:(id)arg1;
-(void)setUrlBarLoadingText:(id)arg1 webviewWrapper:(id)arg2;
-(void)showAddPassesViewForWebviewWrapper:(id)arg1;
-(void)dismissAddPassesViewForWebviewWrapper:(id)arg1;
-(void)showConnectionErrorForWebviewWrapper:(id)arg1;
-(void)didClickCancelInExternalOpenDialogForWebviewWrapper:(id)arg1;
-(BOOL)isVisible;

@end

