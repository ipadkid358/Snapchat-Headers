/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchSectionDataProviding.h>

@protocol SCSearchSectionDataProvidingDelegate, SCPerforming, NSCopying;
@class SCUnifiedProfileSession, SCSearchEventListenerAnnouncer, NSArray, SCUnifiedProfileUsageCarouselSectionActionHandler, NSObject, NSString;

@interface SCUnifiedProfileUsageCarouselSectionDataProvider : NSObject <SCSearchSectionDataProviding> {

	SCUnifiedProfileSession* _profileSession;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	NSArray* _contentViewModel;
	NSArray* _friendEmojiInfo;
	SCUnifiedProfileUsageCarouselSectionActionHandler* _actionHandler;
	id<SCSearchSectionDataProvidingDelegate> _dataProviderDelegate;
	id<SCPerforming> _updateQueuePerformer;
	NSObject*<NSCopying> _sectionDataModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchSectionDataProvidingDelegate> dataProviderDelegate;              //@synthesize dataProviderDelegate=_dataProviderDelegate - In the implementation block
@property (nonatomic,copy) NSObject*<NSCopying> sectionDataModel;                                               //@synthesize sectionDataModel=_sectionDataModel - In the implementation block
@property (nonatomic,retain) id<SCPerforming> updateQueuePerformer;                                             //@synthesize updateQueuePerformer=_updateQueuePerformer - In the implementation block
+(id)announcerIdentifier;
-(void)setDataProviderDelegate:(id<SCSearchSectionDataProvidingDelegate>)arg1 ;
-(void)setUpdateQueuePerformer:(id<SCPerforming>)arg1 ;
-(id)contentCellClassesByReuseIdentifier;
-(id)configurationBlocksByReuseIdentifier;
-(void)setSectionDataModel:(NSObject*<NSCopying>)arg1 ;
-(void)containerCellViewModelsForIndexPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSObject*<NSCopying>)sectionDataModel;
-(id<SCSearchSectionDataProvidingDelegate>)dataProviderDelegate;
-(id<SCPerforming>)updateQueuePerformer;
-(id)_getContentViewModelForIndexPath:(id)arg1 ;
-(void)_generateContentViewModels;
-(id)initWithProfileSession:(id)arg1 actionHandler:(id)arg2 ;
-(void)_getFriendEmojiInfo;
-(id)_profileTypes;
-(id)_generateFriendEmojiContentViewModelWithFriendEmojiInfo:(id)arg1 ;
-(id)_generateTopBitmojiContentViewModel;
-(id)_generateTopGeofilterContentViewModel;
-(id)_generateTopLensContentViewModel;
-(id)_generateTopPublisherContentViewModel;
-(id)_generateTopStickerContentViewModel;
-(id)_placeholderIconViewModel;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(void)_configureCell:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

