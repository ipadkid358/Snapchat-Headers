/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SCHeaderPromptViewModel, SCHeaderPromptView;


@protocol SCFeedHeaderPromptItem <SCHeaderPromptViewDelegate>
@property (nonatomic,readonly) SCHeaderPromptViewModel * viewModel; 
@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) SCHeaderPromptView * view; 
@property (nonatomic,retain) id<SCFeedHeaderPromptItemDelegate> delegate; 
@optional
-(BOOL)shouldRetainAfterTap;
-(void)tweakedPromptDidExpire;

@required
-(BOOL)shouldShowPrompt;
-(void)willShowPrompt;
-(void)setDelegate:(id)arg1;
-(id<SCFeedHeaderPromptItemDelegate>)delegate;
-(SCHeaderPromptView *)view;
-(unsigned long long)itemType;
-(SCHeaderPromptViewModel *)viewModel;

@end

