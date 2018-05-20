/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class SCDiscoverChannels, NSString;

@interface SCDiscoverChannelsModel : NSObject <NSCoding> {

	SCDiscoverChannels* _discoverChannels;
	unsigned long long _discoverEligibility;
	NSString* _discoverResourceKey;
	NSString* _discoverResourceValue;
	NSString* _discoverVideoCatalogEndpoint;
	NSString* _discoverAdVideoCatalogEndpoint;
	NSString* _dSnapValidatorEndpoint;
	NSString* _discoverChannelsEndpointString;
	NSString* _discoverEditionEndpointString;

}

@property (nonatomic,readonly) SCDiscoverChannels * discoverChannels;                       //@synthesize discoverChannels=_discoverChannels - In the implementation block
@property (nonatomic,readonly) unsigned long long discoverEligibility;                      //@synthesize discoverEligibility=_discoverEligibility - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverResourceKey;                         //@synthesize discoverResourceKey=_discoverResourceKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverResourceValue;                       //@synthesize discoverResourceValue=_discoverResourceValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverVideoCatalogEndpoint;                //@synthesize discoverVideoCatalogEndpoint=_discoverVideoCatalogEndpoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverAdVideoCatalogEndpoint;              //@synthesize discoverAdVideoCatalogEndpoint=_discoverAdVideoCatalogEndpoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * dSnapValidatorEndpoint;                      //@synthesize dSnapValidatorEndpoint=_dSnapValidatorEndpoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverChannelsEndpointString;              //@synthesize discoverChannelsEndpointString=_discoverChannelsEndpointString - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverEditionEndpointString;               //@synthesize discoverEditionEndpointString=_discoverEditionEndpointString - In the implementation block
-(void)didDecodeObject;
-(SCDiscoverChannels *)discoverChannels;
-(id)initWithDiscoverChannels:(id)arg1 discoverEligibility:(unsigned long long)arg2 discoverResourceKey:(id)arg3 discoverResourceValue:(id)arg4 discoverVideoCatalogEndpoint:(id)arg5 discoverAdVideoCatalogEndpoint:(id)arg6 discoverChannelsEndpointString:(id)arg7 discoverEditionEndpointString:(id)arg8 dSnapValidatorEndpoint:(id)arg9 ;
-(NSString *)discoverResourceKey;
-(NSString *)discoverResourceValue;
-(unsigned long long)discoverEligibility;
-(NSString *)discoverVideoCatalogEndpoint;
-(NSString *)discoverAdVideoCatalogEndpoint;
-(NSString *)discoverChannelsEndpointString;
-(NSString *)discoverEditionEndpointString;
-(NSString *)dSnapValidatorEndpoint;
-(void)_setupCommonParams;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

