/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDynamicAdDataSource.h>
#import <Snapchat/SCOperaPlaylistAdInsertionProtocol.h>

@class NSMutableSet, NSMutableDictionary, NSString;

@interface SCOfficialStoriesDynamicAdDataSource : SCDynamicAdDataSource <SCOperaPlaylistAdInsertionProtocol> {

	NSMutableSet* _viewedAdItemIds;
	NSMutableSet* _viewedNonAdItemIds;
	double _minTimeFromNextAdInMilliseconds;
	double _lastInsertedAdViewTimeInMilliseconds;
	long long _minSnapsFromNextAd;
	NSMutableDictionary* _adRequestClientIdToStoryMap;
	NSString* _currentGroupId;
	NSMutableDictionary* _groupIdToNextAdSlotPositionMap;
	long long _maxViewedItemIndexInGroup;
	BOOL _enabled;
	unsigned long long _minSnapsFromStart;
	unsigned long long _minTimeFromStartInSeconds;
	unsigned long long _minSnapsFromEnd;
	unsigned long long _minSnapsBetweenAds;
	unsigned long long _minTimeBetweenAdsInSeconds;
	unsigned long long _multiSnapSequenceTimeThresholdInSeconds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)targetingParameters;
-(id)initWithUserSession:(id)arg1 ;
-(unsigned long long)adProductType;
-(void)startViewingPlaylistItemGroup:(id)arg1 previousItemGroup:(id)arg2 ;
-(void)startViewingPlaylistItem:(id)arg1 ;
-(void)stopViewingPlaylistItem:(id)arg1 isViewingLongform:(BOOL)arg2 ;
-(void)stopViewingPlaylistItemGroup:(id)arg1 nextPlaylistItemGroup:(id)arg2 ;
-(void)_makeAdRequestIfNecessary;
-(void)_insertAdIfNecessaryAfterItem:(id)arg1 ;
-(id)adViewContextForGroup:(id)arg1 ;
-(id)mediaLoadContexts;
-(BOOL)shouldInsertPlaylistItem;
-(BOOL)shouldInsertPlaylistItemGroup;
-(id)extraPagePropertiesForDataModel:(id)arg1 ;
-(BOOL)isAdContentLoopingForDataModel:(id)arg1 ;
-(id)adSkipEventForDataModel:(id)arg1 ;
-(void)updateConfig;
-(void)overrideConfigFromTweakIfNecessary;
-(BOOL)_canShowAdAfterItem:(id)arg1 ;
-(void)_incrementNextAdSlotPosition;
-(long long)_getNextAdSlotPosition;
-(void)teardown;
-(void)resetInsertionData;
@end

