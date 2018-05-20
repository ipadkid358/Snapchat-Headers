/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:02 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SCStoriesAdPlacement : NSObject <NSCopying> {

	NSString* _adUnitId;
	NSArray* _targetingParameters;

}

@property (nonatomic,copy,readonly) NSString * adUnitId;                        //@synthesize adUnitId=_adUnitId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * targetingParameters;              //@synthesize targetingParameters=_targetingParameters - In the implementation block
-(id)initWithAdUnitId:(id)arg1 targetingParameters:(id)arg2 ;
-(NSString *)adUnitId;
-(NSArray *)targetingParameters;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

