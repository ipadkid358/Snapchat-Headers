/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDiscoverShareControllerDelegate.h>
#import <Snapchat/SCSendViewControllerNavigationDelegate.h>

@class SCCheetahPromotedStory, SCDiscoverShareController, SCStoryUsageLogger, NSString;

@interface SCPromotedStoryShareSession : NSObject <SCDiscoverShareControllerDelegate, SCSendViewControllerNavigationDelegate> {

	SCCheetahPromotedStory* _promotedStory;
	SCDiscoverShareController* _discoverShareController;
	SCStoryUsageLogger* _usageLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shareControllerDidBeginSharing:(id)arg1 ;
-(void)shareController:(id)arg1 didCompleteSharing:(BOOL)arg2 withParameters:(id)arg3 ;
-(void)shareControllerDidSaveSnap:(id)arg1 parameters:(id)arg2 ;
-(void)shareControllerDidExitPreview;
-(void)shareController:(id)arg1 didChangeState:(long long)arg2 ;
-(void)dismissSendViewController:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 promotedStory:(id)arg2 coverImage:(id)arg3 fromViewController:(id)arg4 ;
-(void)sendFromViewController:(id)arg1 ;
@end
