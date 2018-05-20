/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchSectionDataProviding.h>

@protocol SCSearchSectionDataProvidingDelegate, NSCopying, SCPerforming;
@class SCUserSession, SCSearchEventListenerAnnouncer, NSObject, NSString;

@interface SCSearchMapCardSectionDataProvider : NSObject <SCSearchSectionDataProviding> {

	SCUserSession* _userSession;
	long long _mapSectionStyle;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	id<SCSearchSectionDataProvidingDelegate> _dataProviderDelegate;
	NSObject*<NSCopying> _sectionDataModel;
	id<SCPerforming> _updateQueuePerformer;

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
-(long long)dataLoadingStatus;
-(id<SCSearchSectionDataProvidingDelegate>)dataProviderDelegate;
-(id<SCPerforming>)updateQueuePerformer;
-(void)_configureMapCardCell:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 mapSectionStyle:(long long)arg2 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)setUp;
@end

