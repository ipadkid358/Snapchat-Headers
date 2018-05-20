/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCStoriesAdPlacement, SCStoriesSponsorMetadata, SCStoriesSponsoredSlug;

@interface SCStoriesSnapAdInfo : NSObject <NSCopying> {

	BOOL _adCanFollow;
	BOOL _isSponsered;
	long long _brandFriendliness;
	SCStoriesAdPlacement* _adPlacement;
	SCStoriesSponsorMetadata* _sponsor;
	SCStoriesSponsoredSlug* _sponsoredSlug;

}

@property (nonatomic,readonly) long long brandFriendliness;                              //@synthesize brandFriendliness=_brandFriendliness - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesAdPlacement * adPlacement;                  //@synthesize adPlacement=_adPlacement - In the implementation block
@property (nonatomic,readonly) BOOL adCanFollow;                                         //@synthesize adCanFollow=_adCanFollow - In the implementation block
@property (nonatomic,readonly) BOOL isSponsered;                                         //@synthesize isSponsered=_isSponsered - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSponsorMetadata * sponsor;                  //@synthesize sponsor=_sponsor - In the implementation block
@property (nonatomic,copy,readonly) SCStoriesSponsoredSlug * sponsoredSlug;              //@synthesize sponsoredSlug=_sponsoredSlug - In the implementation block
-(SCStoriesSponsoredSlug *)sponsoredSlug;
-(SCStoriesSponsorMetadata *)sponsor;
-(BOOL)adCanFollow;
-(long long)brandFriendliness;
-(id)initWithBrandFriendliness:(long long)arg1 adPlacement:(id)arg2 adCanFollow:(BOOL)arg3 isSponsered:(BOOL)arg4 sponsor:(id)arg5 sponsoredSlug:(id)arg6 ;
-(SCStoriesAdPlacement *)adPlacement;
-(BOOL)isSponsered;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

