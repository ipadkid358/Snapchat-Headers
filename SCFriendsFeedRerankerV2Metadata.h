/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface SCFriendsFeedRerankerV2Metadata : NSObject <NSCopying, NSCoding> {

	BOOL _enable;
	float _maxBoost;
	long long _maxStoriesToBoost;
	long long _targetPosStart;
	long long _targetPosInc;

}

@property (nonatomic,readonly) BOOL enable;                              //@synthesize enable=_enable - In the implementation block
@property (nonatomic,readonly) float maxBoost;                           //@synthesize maxBoost=_maxBoost - In the implementation block
@property (nonatomic,readonly) long long maxStoriesToBoost;              //@synthesize maxStoriesToBoost=_maxStoriesToBoost - In the implementation block
@property (nonatomic,readonly) long long targetPosStart;                 //@synthesize targetPosStart=_targetPosStart - In the implementation block
@property (nonatomic,readonly) long long targetPosInc;                   //@synthesize targetPosInc=_targetPosInc - In the implementation block
-(float)maxBoost;
-(long long)maxStoriesToBoost;
-(long long)targetPosStart;
-(long long)targetPosInc;
-(id)initWithEnable:(BOOL)arg1 maxBoost:(float)arg2 maxStoriesToBoost:(long long)arg3 targetPosStart:(long long)arg4 targetPosInc:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enable;
@end

