/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCFideliusColumn : NSObject {

	NSString* _colName;
	int _colType;

}
+(id)typeToStr:(int)arg1 ;
-(id)initWithName:(id)arg1 withType:(int)arg2 ;
-(id)translateToColumnDefinition;
-(id)name;
@end

