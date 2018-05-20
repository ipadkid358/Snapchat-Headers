/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SCSearchSectionHeaderModel;

@interface SCSearchLoadingSectionConfiguration : NSObject <NSCopying> {

	SCSearchSectionHeaderModel* _sectionHeaderModel;
	long long _cellStyle;
	double _delay;
	double _minimumInteritemSpacing;

}

@property (nonatomic,copy,readonly) SCSearchSectionHeaderModel * sectionHeaderModel;              //@synthesize sectionHeaderModel=_sectionHeaderModel - In the implementation block
@property (nonatomic,readonly) long long cellStyle;                                               //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,readonly) double delay;                                                      //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double minimumInteritemSpacing;                                    //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
-(SCSearchSectionHeaderModel *)sectionHeaderModel;
-(id)initWithSectionHeaderModel:(id)arg1 cellStyle:(long long)arg2 delay:(double)arg3 minimumInteritemSpacing:(double)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)minimumInteritemSpacing;
-(double)delay;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)cellStyle;
@end
