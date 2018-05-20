/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface SCCheetahStoriesSectionHeaderViewModel : NSObject <NSCopying> {

	NSAttributedString* _attributeTitle;
	double _leftMargin;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributeTitle;              //@synthesize attributeTitle=_attributeTitle - In the implementation block
@property (nonatomic,readonly) double leftMargin;                                     //@synthesize leftMargin=_leftMargin - In the implementation block
-(id)initWithAttributeTitle:(id)arg1 leftMargin:(double)arg2 ;
-(NSAttributedString *)attributeTitle;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)leftMargin;
@end

