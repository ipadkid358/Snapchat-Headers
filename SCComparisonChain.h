/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCComparisonChain : NSObject
+(id)start;
+(id)active;
-(id)trueFirstWithLeft:(BOOL)arg1 right:(BOOL)arg2 ;
-(id)falseFirstWithLeft:(BOOL)arg1 right:(BOOL)arg2 ;
-(id)compareNumbersWithLeft:(id)arg1 right:(id)arg2 ;
-(id)compareStringsWithLeft:(id)arg1 right:(id)arg2 ;
-(id)compareLeft:(id)arg1 right:(id)arg2 comparator:(/*^block*/id)arg3 ;
-(id)classify:(long long)arg1 ;
-(long long)result;
@end

