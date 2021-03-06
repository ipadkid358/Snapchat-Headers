/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFeedManagerListener.h>
#import <Snapchat/SCFeedDataSource.h>

@protocol SCFeedDataSourceDelegate;
@class NSArray, NSDictionary, SCCheetahFeedDebugManager, NSString;

@interface SCClearFeedDataSource : NSObject <SCFeedManagerListener, SCFeedDataSource> {

	NSArray* _clearableViewModels;
	NSDictionary* _clearableViewModelIndexes;
	id<SCFeedDataSourceDelegate> _delegate;
	SCCheetahFeedDebugManager* _debugManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCFeedDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCCheetahFeedDebugManager * debugManager;                //@synthesize debugManager=_debugManager - In the implementation block
@property (assign,nonatomic) BOOL searching; 
@property (assign,nonatomic) long long type; 
@property (assign,nonatomic) long long unreadConversationCount; 
-(id)viewModels;
-(void)didFeedManagerViewModelChange:(id)arg1 ;
-(void)updateForViewDidFullyDisappear;
-(long long)indexForFeedId:(id)arg1 ;
-(SCCheetahFeedDebugManager *)debugManager;
-(id)allFeedItems;
-(void)reloadFeed;
-(void)_feedItemsDidChangeWithRecentItems:(id)arg1 feedId:(id)arg2 ;
-(void)feedWillReload;
-(id)cachedViewModels;
-(id)init;
-(void)setDelegate:(id<SCFeedDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<SCFeedDataSourceDelegate>)delegate;
@end

