/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:39 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCS2CellUnion, NSArray;

@interface SCUnlockablesPreCacheConfig : NSObject {

	SCS2CellUnion* _precacheRegionsS2Union;
	NSArray* _precacheRegionsTokensArray;
	long long _limitForNonGuaranteed;

}
-(void)_ensureNonNilObjects;
-(id)s2UnionFroms2TokenArray:(id)arg1 ;
-(id)preCacheRegionsS2Union;
-(long long)limitForNonGuaranteed;
-(void)setPreCacheRegions:(id)arg1 ;
-(void)setLimitForNonGuaranteed:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)clearCache;
@end
