/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SCSearchFormsMapFooterViewModel : NSObject <NSCopying> {

	NSArray* _points;
	NSArray* _polygons;

}

@property (nonatomic,copy,readonly) NSArray * points;                //@synthesize points=_points - In the implementation block
@property (nonatomic,copy,readonly) NSArray * polygons;              //@synthesize polygons=_polygons - In the implementation block
-(id)initWithPoints:(id)arg1 polygons:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)points;
-(NSArray *)polygons;
@end

