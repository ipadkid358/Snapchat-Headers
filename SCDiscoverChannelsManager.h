/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCTimeProfilable.h>
#import <Snapchat/SCArchiveObjectManager.h>

@class SCArchiveLoader, SCDiscoverChannelsModel, NSString;

@interface SCDiscoverChannelsManager : NSObject <SCTimeProfilable, SCArchiveObjectManager> {

	BOOL _fetchingChannelsFromServer;
	BOOL _allowUnloadedDiscoverChannelsModelAccess;
	SCArchiveLoader* _loader;
	SCDiscoverChannelsModel* _discoverChannelsModel;

}

@property (nonatomic,retain) SCDiscoverChannelsModel * discoverChannelsModel;              //@synthesize discoverChannelsModel=_discoverChannelsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)path;
+(int)context;
+(id)shared;
-(/*^block*/id)_loadedBlock;
-(void)loadFromDiskAsync:(BOOL)arg1 ;
-(void)markAsLoadedWithoutLoadingFromDisk;
-(BOOL)shouldLoadFromDiskImmediately;
-(void)waitUntilDiscoverChannelsModelLoadsWithCallback:(/*^block*/id)arg1 ;
-(SCDiscoverChannelsModel *)discoverChannelsModel;
-(void)setDiscoverChannelsModel:(SCDiscoverChannelsModel *)arg1 ;
-(void)accessPotentiallyUnloadedDiscoverChannelsModelWithBlock:(/*^block*/id)arg1 ;
-(id)currentChannelHashes;
-(unsigned long long)_checkAndGetEligibilityWithCompatibility:(id)arg1 ;
-(void)updateWithDiscoverConfig:(id)arg1 ;
-(void)setDiscoverEligibility:(unsigned long long)arg1 ;
-(id)init;
-(void)clear;
-(BOOL)saveState;
@end

