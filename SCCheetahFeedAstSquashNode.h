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

@class SCCheetahFeedAstNode;

@interface SCCheetahFeedAstSquashNode : NSObject <NSCopying, NSCoding> {

	SCCheetahFeedAstNode* _variable;
	double _linearRegion;
	double _limit;

}

@property (nonatomic,copy,readonly) SCCheetahFeedAstNode * variable;              //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) double linearRegion;                               //@synthesize linearRegion=_linearRegion - In the implementation block
@property (nonatomic,readonly) double limit;                                      //@synthesize limit=_limit - In the implementation block
-(id)initWithVariable:(id)arg1 linearRegion:(double)arg2 limit:(double)arg3 ;
-(double)linearRegion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCCheetahFeedAstNode *)variable;
-(double)limit;
@end

