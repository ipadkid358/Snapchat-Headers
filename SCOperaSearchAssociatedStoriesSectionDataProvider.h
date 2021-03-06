/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchSectionDataProviding.h>
#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol SCSearchItemDownloading, NSCopying, SCPerforming, SCSearchSectionDataProvidingDelegate;
@class SCSearchEventListenerAnnouncer, NSObject, NSArray, NSString;

@interface SCOperaSearchAssociatedStoriesSectionDataProvider : NSObject <SCSearchSectionDataProviding, SCSearchEventAnnouncing> {

	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	id<SCSearchItemDownloading> _imageDownloader;
	BOOL _shouldEnableDebug;
	NSObject*<NSCopying> _sectionDataModel;
	id<SCPerforming> _updateQueuePerformer;
	id<SCSearchSectionDataProvidingDelegate> _dataProviderDelegate;
	NSArray* _dynamicStories;
	NSString* _searchSessionId;

}

@property (nonatomic,copy) NSArray * dynamicStories;                                                            //@synthesize dynamicStories=_dynamicStories - In the implementation block
@property (assign,nonatomic) BOOL shouldEnableDebug;                                                            //@synthesize shouldEnableDebug=_shouldEnableDebug - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchSessionId;                                                 //@synthesize searchSessionId=_searchSessionId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SCSearchSectionDataProvidingDelegate> dataProviderDelegate;              //@synthesize dataProviderDelegate=_dataProviderDelegate - In the implementation block
@property (nonatomic,copy) NSObject*<NSCopying> sectionDataModel;                                               //@synthesize sectionDataModel=_sectionDataModel - In the implementation block
@property (nonatomic,retain) id<SCPerforming> updateQueuePerformer;                                             //@synthesize updateQueuePerformer=_updateQueuePerformer - In the implementation block
+(id)announcerIdentifier;
-(NSArray *)dynamicStories;
-(NSString *)searchSessionId;
-(void)setDataProviderDelegate:(id<SCSearchSectionDataProvidingDelegate>)arg1 ;
-(void)setUpdateQueuePerformer:(id<SCPerforming>)arg1 ;
-(id)contentCellClassesByReuseIdentifier;
-(id)configurationBlocksByReuseIdentifier;
-(void)setSectionDataModel:(NSObject*<NSCopying>)arg1 ;
-(void)containerCellViewModelsForIndexPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSObject*<NSCopying>)sectionDataModel;
-(id<SCSearchSectionDataProvidingDelegate>)dataProviderDelegate;
-(id<SCPerforming>)updateQueuePerformer;
-(id)initWithImageDownloader:(id)arg1 ;
-(BOOL)shouldEnableDebug;
-(void)_configureStoryCardCell:(id)arg1 ;
-(void)setDynamicStories:(NSArray *)arg1 ;
-(void)setShouldEnableDebug:(BOOL)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setUp;
@end

