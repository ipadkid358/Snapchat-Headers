/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:40 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Snapchat/SCXClusterable.h>

@class NSString, NSArray, NSURL;

@interface SCMapFriendLocationCluster : NSObject <NSCopying, SCXClusterable> {

	NSString* _clusterId;
	NSArray* _friendLocations;
	NSURL* _floorRemoteImageURL;
	NSURL* _propRemoteImageURL;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) NSString * clusterId;                           //@synthesize clusterId=_clusterId - In the implementation block
@property (nonatomic,readonly) NSArray * friendLocations;                      //@synthesize friendLocations=_friendLocations - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) NSURL * floorRemoteImageURL;                    //@synthesize floorRemoteImageURL=_floorRemoteImageURL - In the implementation block
@property (nonatomic,readonly) NSURL * propRemoteImageURL;                     //@synthesize propRemoteImageURL=_propRemoteImageURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)friendLocationClusterFromSCMTFriendCluster:(id)arg1 ;
-(NSArray *)friendLocations;
-(id)_sortedFriendLocations:(id)arg1 ;
-(id)_clusterIdFromFriendLocations:(id)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 friendLocations:(id)arg2 floorRemoteImageURL:(id)arg3 propRemoteImageURL:(id)arg4 ;
-(NSURL *)floorRemoteImageURL;
-(NSURL *)propRemoteImageURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)clusterId;
@end

