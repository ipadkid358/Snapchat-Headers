/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchActionHandling.h>

@protocol OS_dispatch_queue, SCOurStorySettingsActionHandlerDelegate;
@class NSObject, SCSessionRequestManager, NSString;

@interface SCOurStorySettingsActionHandler : NSObject <SCSearchActionHandling> {

	NSObject*<OS_dispatch_queue> _announceQueue;
	SCSessionRequestManager* _requestManager;
	id<SCOurStorySettingsActionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCOurStorySettingsActionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3 ;
-(void)_handleShowStoryTap:(id)arg1 from:(id)arg2 ;
-(void)_handleDeletionTap:(id)arg1 ;
-(void)_handleSaveTap:(id)arg1 ;
-(void)_deleteStory:(id)arg1 ;
-(void)setDelegate:(id<SCOurStorySettingsActionHandlerDelegate>)arg1 ;
-(id<SCOurStorySettingsActionHandlerDelegate>)delegate;
-(id)initWithRequestManager:(id)arg1 ;
@end
