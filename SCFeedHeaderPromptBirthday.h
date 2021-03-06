/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFeedHeaderPromptItem.h>

@protocol SCFeedHeaderPromptItemDelegate;
@class SCHeaderPromptViewModel, SCHeaderPromptView, SCUserSession, UINavigationController, User, SCLogger, NSString;

@interface SCFeedHeaderPromptBirthday : NSObject <SCFeedHeaderPromptItem> {

	SCUserSession* _userSession;
	UINavigationController* _navigationController;
	User* _user;
	SCLogger* _logger;
	BOOL _didDismissTweakPrompt;
	SCHeaderPromptView* _view;
	SCHeaderPromptViewModel* _viewModel;
	id<SCFeedHeaderPromptItemDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCHeaderPromptViewModel * viewModel;                    //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) SCHeaderPromptView * view;                              //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) id<SCFeedHeaderPromptItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newWithUserSession:(id)arg1 delegate:(id)arg2 navigationController:(id)arg3 ;
-(BOOL)shouldShowPrompt;
-(void)tweakedPromptDidExpire;
-(void)willShowPrompt;
-(id)initWithUserSession:(id)arg1 delegate:(id)arg2 navigationController:(id)arg3 user:(id)arg4 logger:(id)arg5 ;
-(BOOL)_shouldShowFromTweak;
-(void)headerPromptViewDidTap:(id)arg1 ;
-(void)headerPromptViewDidDismiss:(id)arg1 ;
-(void)setDelegate:(id<SCFeedHeaderPromptItemDelegate>)arg1 ;
-(id<SCFeedHeaderPromptItemDelegate>)delegate;
-(SCHeaderPromptView *)view;
-(unsigned long long)itemType;
-(SCHeaderPromptViewModel *)viewModel;
@end

