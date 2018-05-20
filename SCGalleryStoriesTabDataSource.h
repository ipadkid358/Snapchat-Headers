/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGalleryStoryViewModelDelegate.h>

@protocol SCGalleryStoriesTabDataSourceListener;
@class SCUserSession, NSMapTable, NSArray, NSString;

@interface SCGalleryStoriesTabDataSource : NSObject <SCGalleryStoryViewModelDelegate> {

	SCUserSession* _userSession;
	NSMapTable* _viewModelMaps;
	BOOL _dataUpdated;
	id<SCGalleryStoriesTabDataSourceListener> _listener;
	NSArray* _storyViewModels;

}

@property (assign,nonatomic,__weak) id<SCGalleryStoriesTabDataSourceListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSArray * storyViewModels;                                            //@synthesize storyViewModels=_storyViewModels - In the implementation block
@property (nonatomic,readonly) BOOL dataUpdated;                                                     //@synthesize dataUpdated=_dataUpdated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)storyViewModel:(id)arg1 didChange:(unsigned long long)arg2 ;
-(BOOL)_dataUpdated:(id)arg1 ;
-(id)_viewModelWithEntry:(id)arg1 ;
-(void)collapseAllViewModels;
-(void)updateWithEntries:(id)arg1 ;
-(id)viewModelForEntryId:(id)arg1 ;
-(NSArray *)storyViewModels;
-(BOOL)dataUpdated;
-(long long)count;
-(id)entries;
-(id<SCGalleryStoriesTabDataSourceListener>)listener;
-(void)setListener:(id<SCGalleryStoriesTabDataSourceListener>)arg1 ;
@end

