/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:26 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCBubbleDataSourceDelegate.h>
#import <Snapchat/SCChatConversationUpdaterListener.h>

@protocol SCBubbleDataSourceManagerDelegate, SCChatCellGestureDelegate, SCBubbleChatKeyboardDelegate, SCChatConversationViewModel, SCChatMessageActionHandler;
@class UIViewController, SCUserSession, UIView, NSMutableArray, NSString;

@interface SCBubbleDataSourceManagerV3 : NSObject <SCBubbleDataSourceDelegate, SCChatConversationUpdaterListener> {

	id<SCBubbleDataSourceManagerDelegate> _delegate;
	UIViewController*<SCChatCellGestureDelegate> _parentVC;
	SCUserSession* _userSession;
	id<SCBubbleChatKeyboardDelegate> _keyboardDelegate;
	UIView* _containerView;
	id<SCChatConversationViewModel> _conversationViewModel;
	id<SCChatMessageActionHandler> _actionHandler;
	NSMutableArray* _bubbleDataSources;

}

@property (nonatomic,retain) NSMutableArray * bubbleDataSources;              //@synthesize bubbleDataSources=_bubbleDataSources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didConversationViewModelChange:(id)arg1 ;
-(void)bubbleDataSourceDidBeginExpiring:(id)arg1 ;
-(void)bubbleDataSourceDidExpire:(id)arg1 ;
-(id)bubbleDataSourceForViewModel:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 parentVC:(id)arg2 userSession:(id)arg3 containerView:(id)arg4 keyboardDelegate:(id)arg5 actionHandler:(id)arg6 ;
-(void)_createAndAppendDataSourceForViewModel:(id)arg1 ;
-(id)_indexPathsForUpdatedSaveStateViewModelsForUpdates:(id)arg1 oldViewModels:(id)arg2 newViewModels:(id)arg3 ;
-(void)_updateDataSourceForDeletedIndexPaths:(id)arg1 oldConversationViewModel:(id)arg2 ;
-(void)_updateDataSourceForInsertedIndexPaths:(id)arg1 conversationViewModel:(id)arg2 ;
-(void)_updateDataSourceForModifiedIndexPaths:(id)arg1 conversationViewModel:(id)arg2 ;
-(void)_updateDataSourceForToggledSaveIndexPaths:(id)arg1 conversationViewModel:(id)arg2 ;
-(NSMutableArray *)bubbleDataSources;
-(void)setBubbleDataSources:(NSMutableArray *)arg1 ;
@end

